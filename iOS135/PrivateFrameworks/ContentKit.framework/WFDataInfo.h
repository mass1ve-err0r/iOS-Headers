/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFDataInfo : NSObject <NSSecureCoding, WFSerializableContent> {
    NSString * _accountIdentifier;
    NSString * _bundleIdentifier;
    unsigned long long  _disclosureLevel;
    unsigned long long  _managedLevel;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) LSApplicationProxy *app;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long disclosureLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long managedLevel;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)dataInfoWithAccountBasedBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3;
+ (id)dataInfoWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4;
+ (id)dataInfoWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2;
+ (id)dataInfoWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)shortcutsAppDataInfo;
+ (id)shortcutsAppDataInfoWithDisclosureLevel:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)bundleIdentifier;
- (unsigned long long)disclosureLevel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (unsigned long long)managedLevel;
- (id)wfSerializedRepresentation;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)app;

@end
