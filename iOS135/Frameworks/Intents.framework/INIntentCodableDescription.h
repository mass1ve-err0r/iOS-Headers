/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentCodableDescription : INRootCodableDescription <NSCopying, NSSecureCoding> {
    NSString * _attributeKeyPrefix;
    NSString * _attributesKeyPrefix;
    bool  _configurable;
    NSString * _defaultImageName;
    NSString * _descriptiveText;
    NSString * _descriptiveTextLocID;
    bool  _eligibleForSuggestions;
    NSArray * _entityVerbs;
    NSString * _inputAttributeName;
    long long  _intentCategory;
    NSString * _keyAttributeName;
    NSString * _title;
    NSString * _titleLocID;
    bool  _userConfirmationRequired;
    NSString * _verb;
}

@property (setter=_setInputAttributeName:, nonatomic, copy) NSString *_inputAttributeName;
@property (setter=_setKeyAttributeName:, nonatomic, copy) NSString *_keyAttributeName;
@property (getter=isConfigurable, nonatomic) bool configurable;
@property (nonatomic, copy) NSString *defaultImageName;
@property (nonatomic, copy) NSString *descriptiveText;
@property (nonatomic, copy) NSString *descriptiveTextLocID;
@property (getter=isEligibleForSuggestions, nonatomic) bool eligibleForSuggestions;
@property (nonatomic, copy) NSArray *entityVerbs;
@property (nonatomic, readonly) INCodableAttribute *inputAttribute;
@property (nonatomic) long long intentCategory;
@property (nonatomic, readonly) INCodableAttribute *keyAttribute;
@property (nonatomic, readonly, copy) NSString *localizedDescriptiveText;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocID;
@property (nonatomic) bool userConfirmationRequired;
@property (nonatomic, copy) NSString *verb;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributeKeyPrefix;
- (id)_attributesKeyPrefix;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (id)_ignoredAttributeTags;
- (id)_inputAttributeName;
- (id)_keyAttributeName;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (void)_setInputAttributeName:(id)arg1;
- (void)_setKeyAttributeName:(id)arg1;
- (void)_updateWithIntentCodableDescription:(id)arg1;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultImageName;
- (id)descriptiveText;
- (id)descriptiveTextLocID;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityVerbs;
- (id)initWithCoder:(id)arg1;
- (id)inputAttribute;
- (long long)intentCategory;
- (bool)isConfigurable;
- (bool)isEligibleForSuggestions;
- (id)keyAttribute;
- (id)keyPrefix;
- (id)localizedDescriptiveText;
- (id)localizedDescriptiveTextWithLocalizer:(id)arg1;
- (id)localizedTitle;
- (id)localizedTitleWithLocalizer:(id)arg1;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1;
- (void)setConfigurable:(bool)arg1;
- (void)setDefaultImageName:(id)arg1;
- (void)setDescriptiveText:(id)arg1;
- (void)setDescriptiveTextLocID:(id)arg1;
- (void)setEligibleForSuggestions:(bool)arg1;
- (void)setEntityVerbs:(id)arg1;
- (void)setIntentCategory:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocID:(id)arg1;
- (void)setUserConfirmationRequired:(bool)arg1;
- (void)setVerb:(id)arg1;
- (id)title;
- (id)titleLocID;
- (void)updateWithDictionary:(id)arg1;
- (bool)userConfirmationRequired;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_actionParameterDefinitionsWithOverrides:(id)arg1;
- (id)wf_relationResourceDefinitionForAttribute:(id)arg1 parameters:(id)arg2 overrides:(id)arg3;

@end