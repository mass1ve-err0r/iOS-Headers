/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _bagProfile;
    NSString * _bagProfileVersion;
    NSString * _bundleIdentifier;
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    NSString * _processName;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
}

@property (nonatomic, readonly, copy) NSString *bagProfile;
@property (nonatomic, readonly, copy) NSString *bagProfileVersion;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSString *clientVersion;
@property (nonatomic, readonly, copy) NSString *processName;
@property (nonatomic, readonly, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleVersion;

+ (id)defaultInfo;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_clientInfoCopyWithClass:(Class)arg1;
- (id)bagProfile;
- (id)bagProfileVersion;
- (id)bundleIdentifier;
- (id)clientBundleIdentifier;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemApplicationType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)processName;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;

@end