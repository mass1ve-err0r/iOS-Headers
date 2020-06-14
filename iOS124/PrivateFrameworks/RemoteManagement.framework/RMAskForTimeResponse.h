//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSUUID;

@interface RMAskForTimeResponse : NSObject <NSSecureCoding>
{
    NSUUID *_associatedRequestIdentifier;
    long long _answer;
    NSNumber *_respondingUserDSID;
    NSNumber *_amountGranted;
    NSDate *_timeStamp;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSNumber *amountGranted; // @synthesize amountGranted=_amountGranted;
@property(retain, nonatomic) NSNumber *respondingUserDSID; // @synthesize respondingUserDSID=_respondingUserDSID;
@property(nonatomic) long long answer; // @synthesize answer=_answer;
@property(retain, nonatomic) NSUUID *associatedRequestIdentifier; // @synthesize associatedRequestIdentifier=_associatedRequestIdentifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *payload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

