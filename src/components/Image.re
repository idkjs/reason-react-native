include NativeElement;

type uriSource;

[@bs.obj]
external uriSource:
  (
    ~uri: string,
    ~bundle: string=?,
    ~method: string=?,
    ~headers: Js.t('a)=?,
    ~body: string=?,
    ~cache: [@bs.string] [
              | `default
              | `reload
              | [@bs.as "force-cache"] `forceCache
              | [@bs.as "only-if-cached"] `onlyIfCached
            ]
              =?,
    ~scale: float=?,
    ~width: float=?,
    ~height: float=?,
    unit
  ) =>
  uriSource =
  "";

module Source = {
  type t;

  external fromRequired: Packager.required => t = "%identity";
  external fromUriSource: uriSource => t = "%identity";
  external fromUriSources: array(uriSource) => t = "%identity";
};

module DefaultSource = {
  type t = {
    uri: string,
    scale: option(float),
    width: option(float),
    height: option(float),
  };

  external fromRequired: Packager.required => t = "%identity";
};

type imageLoadEvent =
  Event.syntheticEvent({
    .
    "source": {
      .
      "width": float,
      "height": float,
      "url": string,
    },
    "uri": Js.Nullable.t(string),
  });

type errorEvent = Event.syntheticEvent(error)
and error = {error: string};

type progressEvent =
  Event.syntheticEvent({
    .
    "loaded": float,
    "total": float,
  });

[@react.component] [@bs.module "react-native"]
external make:
  (
    ~ref: ref=?,
    // Image props
    ~accessibilityLabel: string=?,
    ~accessible: bool=?,
    ~blurRadius: float=?,
    ~capInsets: View.edgeInsets=?,
    ~defaultSource: DefaultSource.t=?,
    ~fadeDuration: float=?,
    ~loadingIndicatorSource: array(Source.t)=?,
    ~onError: errorEvent => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onLoad: imageLoadEvent => unit=?,
    ~onLoadEnd: unit => unit=?,
    ~onLoadStart: unit => unit=?,
    ~onPartialLoad: unit => unit=?,
    ~onProgress: progressEvent => unit=?,
    ~progressiveRenderingEnabled: bool=?,
    ~resizeMethod: [@bs.string] [ | `auto | `resize | `scale]=?,
    ~resizeMode: [@bs.string] [
                   | `center
                   | `contain
                   | `cover
                   | `repeat
                   | `stretch
                 ]
                   =?,
    ~source: Source.t,
    ~style: Style.t=?,
    ~testID: string=?
  ) =>
  React.element =
  "Image";

type sizeError;

[@bs.module "react-native"] [@bs.scope "Image"]
external getSize:
  (
    ~uri: string,
    ~success: (~width: float, ~height: float) => unit,
    ~failure: sizeError => unit=?,
    unit
  ) =>
  unit =
  "getSize";

type requestId;

[@bs.module "react-native"] [@bs.scope "Image"]
external prefetch: (~uri: string) => requestId = "prefetch";

[@bs.module "react-native"] [@bs.scope "Image"]
external abortPrefetch: requestId => unit = "abortPrefetch";

[@bs.module "react-native"] [@bs.scope "Image"]
external queryCache: (~uris: array(string)) => unit = "queryCache";

type asset = {
  uri: string,
  width: float,
  height: float,
};

[@bs.module "react-native"] [@bs.scope "Image"]
external resolveAssetSource: Source.t => asset = "resolveAssetSource";
