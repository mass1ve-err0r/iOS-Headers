//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXTextComponent.h>

#import <Silex/SXConditional-Protocol.h>

@class NSString, SXJSONArray;

@interface SXConditionalTextComponent : SXTextComponent <SXConditional>
{
}

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *conditions; // @dynamic conditions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

