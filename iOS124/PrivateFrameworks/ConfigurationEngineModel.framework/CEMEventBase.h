//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMEventBase : CEMPayloadBase
{
    NSString *_payloadType;
}

+ (id)eventForPayload:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

