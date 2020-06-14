//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/NSCopying-Protocol.h>
#import <AuthenticationServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface ASPasswordCredential : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_user;
    NSString *_password;
}

+ (id)credentialWithUser:(id)arg1 password:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2;

@end

