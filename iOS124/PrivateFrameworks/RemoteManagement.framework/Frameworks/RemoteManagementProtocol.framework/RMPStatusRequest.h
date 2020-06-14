//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface RMPStatusRequest : CEMPayloadBase
{
    NSString *_requestType;
    NSString *_UDID;
    NSString *_userShortName;
    NSArray *_messages;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestWithUDID:(id)arg1 withUserShortName:(id)arg2 withMessages:(id)arg3;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serialize;
- (_Bool)loadStatusFromDictionary:(id)arg1 error:(id *)arg2;

@end

