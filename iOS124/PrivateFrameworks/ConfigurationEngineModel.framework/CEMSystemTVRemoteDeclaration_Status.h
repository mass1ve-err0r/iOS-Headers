//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@interface CEMSystemTVRemoteDeclaration_Status : CEMPayloadBase
{
}

+ (id)buildRequiredOnly;
+ (id)build;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

