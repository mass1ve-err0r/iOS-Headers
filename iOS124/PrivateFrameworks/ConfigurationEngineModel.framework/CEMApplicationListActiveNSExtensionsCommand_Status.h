//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMApplicationListActiveNSExtensionsCommand_Status : CEMPayloadBase
{
    NSArray *_statusExtensions;
}

+ (id)buildRequiredOnlyWithExtensions:(id)arg1;
+ (id)buildWithExtensions:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusExtensions; // @synthesize statusExtensions=_statusExtensions;
- (void).cxx_destruct;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

