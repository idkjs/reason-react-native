# Changelog of `reason-react-native`

## 0.61.1 - 2020-01-26

### 🚀 Additions

- Add `NativeEventEmitter`
  [#642](https://github.com/reason-react-native/reason-react-native/pull/642) by
  @cknitt
- New abstract type for Android Date/TimePicker `action`
  [#640](https://github.com/reason-react-native/reason-react-native/pull/640) by
  @cknitt
- Add `accessibilityRole` web values and `arialLevel` web props
  ([#639](https://github.com/reason-react-native/reason-react-native/pull/639)
  by @Naturalclar

### ⛑ Fixes

- Fix `autoCompleteType` prop for `TextInput` component (previously incorrectly
  named `autoComplete`)
  ([#639](https://github.com/reason-react-native/reason-react-native/pull/639)
  by @Naturalclar
- Resolves all BuckleScript inferred name warnings
  ([#628](https://github.com/reason-react-native/reason-react-native/pull/628)
  by @idkjs

## 0.61.0 - 2019-11-20

### 💥 Breaking change

- Change type for `DrawerLayoutAndroid` `drawerPosition` prop
  [#626](https://github.com/reason-react-native/reason-react-native/pull/626) by
  @sgny.  
  You need to replace `DrawerLayoutAndroid.left` & `DrawerLayoutAndroid.right`
  by `` `left `` & `` `right ``.

### 🚀 New bindings

- Add `SoundManager` + deprecate `UIManager.playTouchSound`
  [#616](https://github.com/reason-react-native/reason-react-native/pull/616) by
  @sgny
- Add `useWindowDimensions` hook
  [#615](https://github.com/reason-react-native/reason-react-native/pull/615) by
  @sgny
- Add `touchSoundDisabled` prop to `Button` and all Touchable components
  [#627](https://github.com/reason-react-native/reason-react-native/pull/627) by
  @stuartkeith

## 0.60.1 - 2019-10-28

Probably the latest release for React Native 0.60. We will focus on 0.61.

### 💥 Breaking changes (minor)

Sorry, a mix of bugfixes & changes! This should be easy to handle for you.

- Add constructor for section type in `VirtualizedSectionList`
  [#614](https://github.com/reason-react-native/reason-react-native/pull/614) by
  @sgny
- Add `SectionList`/`VirtualizedSectionList` section data as parameterized type
  [#618](https://github.com/reason-react-native/reason-react-native/pull/618) by
  @jfrolich

### ⛑ Fixes

- Fix `AppState` (now return `unit`)
  [#568](https://github.com/reason-react-native/reason-react-native/pull/568) by
  @cknitt
- Fix `Animated.event` type so it can be used in `Animated.ScrollView`
  `onScroll` props (& similar)
  [#584](https://github.com/reason-react-native/reason-react-native/pull/584) by
  @MoOx
- Fix missing `[@bs.meth]` in methods of `Event`, `BackHandler` & `NetInfo`
  [#621](https://github.com/reason-react-native/reason-react-native/pull/621) by
  @cknitt
- Fix `ScrollView` `scrollToItem`, `scrollToIndex` and `scrollToOffset`
  [#569](https://github.com/reason-react-native/reason-react-native/pull/569) by
  @benadamstyles
- Fix `Webview` `contentInset` prop
  [#607](https://github.com/reason-react-native/reason-react-native/pull/607) by
  @cem2ran
- Fix `WebView` event types & add missing fields
  [#608](https://github.com/reason-react-native/reason-react-native/pull/608) by
  @cem2ran

### 🚀 New bindings

- Add `AccessibilityInfo`
  [#587](https://github.com/reason-react-native/reason-react-native/pull/587) by
  @sgny
- Add `Alert.prompt`
  [#617](https://github.com/reason-react-native/reason-react-native/pull/617) by
  by @fhammerschmidt
- Add `Animated.SectionList` and `Animated.FlatList`
  [#600](https://github.com/reason-react-native/reason-react-native/pull/600) by
  @sgny +
  [#623](https://github.com/reason-react-native/reason-react-native/pull/623) by
  @jfrolich
- Add lots of `AppRegistry` methods
  [#567](https://github.com/reason-react-native/reason-react-native/pull/567) by
  @sgny +
  [#560](https://github.com/reason-react-native/reason-react-native/pull/560) by
  @cknitt
- Add `Global.__DEV__`
  [#609](https://github.com/reason-react-native/reason-react-native/pull/609) by
  @sgny
- Add `Global.hermesInternal`
  [#613](https://github.com/reason-react-native/reason-react-native/pull/613) by
  @MoOx
- Add `YellowBox`
  [#562](https://github.com/reason-react-native/reason-react-native/pull/562) by
  @cknitt

### 📖 Documentation

We improved some part of the missing docs, thanks to contributions of @sgny,
@idkjs, @fhammerschmidt & @MoOx and maybe others we forgot to mention (but
`git log` doesn't)

## 0.60.0 - 2019-06-17

✨ Initial release for this new React Native bindings!

See
<https://reasonml-community.github.io/reason-react-native/en/blog/2019-06-17-hello-reason-react-native/>
for more information.
