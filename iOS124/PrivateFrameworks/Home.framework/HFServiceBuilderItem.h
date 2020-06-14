//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFItemBuilderItem-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HFServiceBuilder, HFServiceItem, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>
{
    HFServiceBuilder *_serviceBuilder;
    HFServiceItem *_serviceItem;
}

@property(readonly, nonatomic) HFServiceItem *serviceItem; // @synthesize serviceItem=_serviceItem;
@property(readonly, nonatomic) HFServiceBuilder *serviceBuilder; // @synthesize serviceBuilder=_serviceBuilder;
- (void).cxx_destruct;
- (id)accessories;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)services;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServiceBuilder:(id)arg1 valueSource:(id)arg2;
- (id)initWithServiceBuilder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

