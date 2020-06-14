/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INAppInfo : NSObject <NSSecureCoding> {
    NSSet * _actionsRestrictedWhileLocked;
    NSSet * _actionsRestrictedWhileProtectedDataUnavailable;
    NSString * _applicationIdentifier;
    NSString * _companionApplicationIdentifier;
    NSSet * _definedIntents;
    NSString * _developmentRegion;
    NSSet * _supportedActions;
    NSSet * _supportedActionsByExtensions;
    NSSet * _supportedMediaCategories;
}

@property (nonatomic, copy) NSSet *actionsRestrictedWhileLocked;
@property (nonatomic, copy) NSSet *actionsRestrictedWhileProtectedDataUnavailable;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *companionApplicationIdentifier;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, copy) NSSet *definedIntents;
@property (nonatomic, copy) NSString *developmentRegion;
@property (nonatomic, copy) NSSet *supportedActions;
@property (nonatomic, copy) NSSet *supportedActionsByExtensions;
@property (nonatomic, copy) NSSet *supportedMediaCategories;

+ (id)_appInfoWithAppProxy:(id)arg1 plugInKitPlugins:(id)arg2 userActivityTypes:(id)arg3;
+ (id)appInfoWithAppProxy:(id)arg1;
+ (id)appInfoWithData:(id)arg1 error:(id*)arg2;
+ (id)appInfoWithIntent:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionsRestrictedWhileLocked;
- (id)actionsRestrictedWhileProtectedDataUnavailable;
- (id)applicationIdentifier;
- (id)companionApplicationIdentifier;
- (id)data;
- (id)definedIntents;
- (id)developmentRegion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActionsRestrictedWhileLocked:(id)arg1;
- (void)setActionsRestrictedWhileProtectedDataUnavailable:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCompanionApplicationIdentifier:(id)arg1;
- (void)setDefinedIntents:(id)arg1;
- (void)setDevelopmentRegion:(id)arg1;
- (void)setSupportedActions:(id)arg1;
- (void)setSupportedActionsByExtensions:(id)arg1;
- (void)setSupportedMediaCategories:(id)arg1;
- (id)supportedActions;
- (id)supportedActionsByExtensions;
- (id)supportedMediaCategories;

@end