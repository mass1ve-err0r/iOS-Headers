//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError, NSNumber, NSString;

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;
    NSError *_error;
    NSNumber *_persistentID;
    long long _status;
}

+ (id)_resultWithPersistentID:(long long)arg1 bundleID:(id)arg2 status:(long long)arg3 error:(id)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)resultWithValidActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithRestrictedActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithInvalidActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithExistingActivity:(long long)arg1 bundleID:(id)arg2;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *persistentID; // @synthesize persistentID=_persistentID;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

