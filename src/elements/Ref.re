type t('element);

type valueRef('element) = React.Ref.t(Js.nullable('element));
type callbackRef('element) = Js.nullable('element) => unit;

external value: valueRef('element) => t('element) = "%identity";
external callback: callbackRef('element) => t('element) = "%identity";
