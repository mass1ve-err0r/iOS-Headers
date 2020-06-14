/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFContentItemAction : WFAction {
    WFContentProperty * _defaultProperty;
}

@property (nonatomic, readonly) Class contentItemClass;
@property (nonatomic, readonly) WFContentProperty *defaultProperty;

- (void).cxx_destruct;
- (Class)contentItemClass;
- (id)defaultProperty;
- (id)description;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)inputContentClasses;
- (bool)inputsMultipleItems;
- (bool)outputsMultipleItems;
- (id)unsupportedEnvironments;

@end