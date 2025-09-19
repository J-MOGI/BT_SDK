[태그 다운로드]: https://github.com/Jieli-Tech/fw-AC63_BT_SDK/tags
[태그_배지]: https://img.shields.io/github/v/tag/Jieli-Tech/fw-AC63_BT_SDK?style=plastic&logo=bluetooth&labelColor=ffffff&color=informational&label=Tag&logoColor=blue

# fw-AC63_BT_SDK [![태그][태그_배지]][태그 다운로드]

중국어 | [EN](./README-en.md)

AC63 시리즈 범용 블루투스 SDK 펌웨어

이 저장소에는 SDK 릴리스 코드가 포함되어 있으며, 오프라인 및 온라인 릴리스를 동시에 지원하고, 다른 오픈 소스 프로젝트(예: Zephyr RTOS)를 참조합니다.

이 프로젝트에 제공된 예제에는 해당 명명 규칙이 적용된 라이브러리 파일(lib.a)이 필요합니다. 해당 하위 저장소를 사용하여 컴파일하세요.

빠른 시작
------------

Jieli 오픈 소스 프로젝트에 오신 것을 환영합니다. 시작하기 전에 SDK 소개 문서를 자세히 읽어보세요.
이 문서는 Jieli 시리즈 칩과 SDK에 대한 전반적인 이해를 제공하며, 빠른 시작 가이드를 사용하여 개발을 시작할 수 있습니다.

툴체인
------------

Jieli 툴체인을 다운로드하고 환경을 설정하는 방법에 대한 자세한 내용은 다음을 참조하세요.

* 컴파일 도구: Jieli 컴파일 도구를 설치하여 컴파일 환경을 설정하세요. [다운로드 링크](https://doc.zh-jieli.com/Tools/zh-cn/dev_tools/dev_env/index.html)

* USB 업그레이드 도구: 개발이 완료되면 Jieli 플래시 도구를 사용하여 개발 및 디버깅을 위해 해당 hex 파일을 타겟 보드에 플래시해야 합니다. 도구 다운로드 방법에 대한 자세한 내용은 애플리케이션 페이지를 참조하세요. [링크](https://item.taobao.com/item.htm?spm=a1z10.1-c-s.w4004-22883854875.5.504d246bXKwyeH&id=620295020803)를 클릭하고 해당 [문서](https://doc.zh-jieli.com/Tools/zh-cn/dev_tools/forced_upgrade/index.html)와 관련 다운로드 스크립트 [구성](https://doc.zh-jieli.com/AC63/zh-cn/master/getting_started/project_download/INI_config.html)을 주의 깊게 읽어보세요.

소개 문서
------------

* 칩 개요: [SoC 데이터시트 요약](https://doc.zh-jieli.com/vue/#/docs/ac63), [다운로드 링크](./doc/datasheet)

* SDK 버전 정보: [SDK 버전 기록](https://doc.zh-jieli.com/AC63/zh-cn/master/other/version/index.html)

* SDK 소개: [SDK 빠른 시작 가이드](https://doc.zh-jieli.com/AC63/zh-cn/master/index.html)

* SDK 아키텍처: [SDK 모듈 아키텍처](./doc/architure)

프로젝트 빌드
-------------
다음 프로젝트 중 하나를 선택하여 빌드하세요. 다음 디렉터리에는 개발용 프로젝트 파일이 있습니다.

* Bluetooth 애플리케이션: [SPP_LE](./apps/spp_and_le), 애플리케이션: 투명 전송, 데이터 전송, 스캐닝 장치, 브로드캐스팅 장치, 비콘, FindMy 앱, 다중 장치 연결. 동글(USB/BT). [문서 링크](https://doc.zh-jieli.com/AC63/zh-cn/master/module_demo/spple/index.html)

* Bluetooth 애플리케이션: [HID](./apps/hid), 애플리케이션: 리모컨, 셀카 카메라, 키보드, 마우스, PUBG Mobile, 음성 리모컨. [문서 링크](https://doc.zh-jieli.com/AC63/zh-cn/master/module_demo/hid/index.html)

* Bluetooth 애플리케이션: [Mesh](./apps/mesh), 애플리케이션: IoT 노드, Tmall Genie Access, Ad Hoc 네트워크 애플리케이션. [문서 링크](https://doc.zh-jieli.com/AC63/zh-cn/master/module_demo/mesh/index.html)

출시된 버전에 대한 자세한 내용은 태그를 참조하세요.

곧 출시 예정:

* Bluetooth 애플리케이션: IoT(IPv6/6lowpan)

* 2.4G 애플리케이션: Vendor Wireless

SDK는 Codeblock과 Make 컴파일 환경을 모두 지원합니다. 컴파일하기 전에 컴파일 환경이 설정되어 있는지 확인하십시오.

* Codeblock 컴파일: 해당 프로젝트 디렉터리로 이동하여 `.cbp`로 끝나는 파일을 찾으십시오. 파일을 두 번 클릭하여 열고 컴파일하십시오.

* Makefile 컴파일: `tools/make_prompt.bat`를 두 번 클릭하고 `make target`을 입력하십시오(특정 `target` 이름은 `Makefile` 시작 부분의 주석을 참조하십시오).

코드를 컴파일하고 다운로드하기 전에 USB 업그레이드 도구가 제대로 연결되어 있고 프로그래밍 모드인지 확인하십시오.

* Bluetooth OTA: [OTA](https://doc.zh-jieli.com/AC63/zh-cn/master/module_demo/ota/index.html), 단일 백업 및 이중 백업 Bluetooth 업그레이드에 적용 가능

공식 Bluetooth 인증
-------------

클래식 Bluetooth LMP / Bluetooth Low Energy 링크 계층 및 호스트 프로토콜 스택은 Bluetooth 5.0, 5.1 및 5.4를 지원합니다.

* Core v5.0 [QDID 134104](https://launchstudio.bluetooth.com/ListingDetails/88799)

* Core v5.1 [QDID 136145](https://launchstudio.bluetooth.com/ListingDetails/91371)

* Core v5.4 [QDID 222830](https://launchstudio.bluetooth.com/ListingDetails/193923)

하드웨어 환경
-------------

* 개발 및 평가 보드 개발 보드 신청 포털 [링크](https://shop321455197.taobao.com/?spm=a230r.7195193.1997079397.2.2a6d391d3n5udo)

* 생산 플래시 도구: 대량 생산 및 베어칩 플래싱용으로 설계되었습니다. [링크](https://item.taobao.com/item.htm?spm=a1z10.1-c-s.w4004-22883854875.8.504d246bXKwyeH&id=620941819219)에서 신청하시고 관련 [문서](https://doc.zh-jieli.com/Tools/zh-cn/mass_prod_tools/burner_1tuo2/index.html)를 주의 깊게 읽어보세요.

* 무선 테스트 박스: 무선 업데이트, RF 교정 및 신속한 제품 테스트를 위해 설계되었습니다. 지금 신청하세요 [링크](https://item.taobao.com/item.htm?spm=a1z10.1-c-s.w4004-22883854875.10.504d246bXKwyeH&id=620942507511). 자세한 내용은 [문서](https://doc.zh-jieli.com/Tools/zh-cn/mass_prod_tools/testbox_1tuo2/index.html)를 참조하세요.

커뮤니티
--------------

* 기술 교류 그룹, DingTalk 그룹

그룹 1: `31691148` (전체)

그룹 2: `3375034077` (전체)

그룹 3: `107855006323`

* FAQ 모음 [링크](./doc/FAQ)

면책 조항
------------

AC63_BT_SDK는 AC63 시리즈 칩셋 개발을 지원합니다.
AC63 시리즈 칩셋은 일반적인 Bluetooth 애플리케이션을 지원하며 개발, 평가, 프로토타입 제작 및 대량 생산에도 사용할 수 있습니다. 해당 SDK 버전은 태그 및 릴리스를 참조하십시오.
