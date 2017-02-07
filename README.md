## iOSDeviceManager

A tool for launching XCUITests on device and simulator, and a library
for device/simulator lifecycle management.

### Code Signing

Starting in Xcode 8, a code signing identity is required for building.

Project maintainers must clone the [codesign](https://github.com/calabash/calabash-codesign)
repo and install the certs and profiles. Talk to @jmoody or @sapieneptus
for details.

Contributors need to touch the Xcode project file with valid credentials.

### Building

```shell
$ git clone --recursive git@github.com:calabash/iOSDeviceManager.git
$ make build

# Usage
$ Products/iOSDeviceManager
```

### Testing

```shell
$ carthage bootstrap
$ make test-unit
$ make test-integration
$ make tests

# Test against an alternative Xcode
$ DEVELOPER_DIR=/Xcode/8.0/Xcode-beta.app/Contents/Developer make tests
```

If you encounter build errors in the Xcode IDE, clean the DerivedData
directory (deep clean - Command + Shift + Option + K).  You are likely
to see errors if you switch Xcode IDEs between runs.

If you have physical device attached and it is compatible with and
available to the active Xcode (the Xcode IDE or the returned by
xcode-select), integration tests will be performed against the device.
If no device is found, the tests are skipped.

### Packaging

```shell
# stage the dependences to ./Distribution/dependencies.
$ make dependencies
```

The make `dependencies` rule expects the DeviceAgent.iOS repo
to be located at `../DeviceAgent.iOS`.  If your local copy of DeviceAgent.iOS
is in another location, use the `DEVICEAGENT_PATH` env var to specify
the correct path.

