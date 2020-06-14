/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMManagementChannel : NSObject <NSSecureCoding> {
    NSString * _accountDescription;
    NSString * _accountIdentifier;
    NSString * _enrollmentToken;
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *accountDescription;
@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *enrollmentToken;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enrollmentToken;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 enrollmentToken:(id)arg3 accountIdentifier:(id)arg4 accountDescription:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannel:(id)arg1;
- (void)setEnrollmentToken:(id)arg1;
- (long long)type;

@end