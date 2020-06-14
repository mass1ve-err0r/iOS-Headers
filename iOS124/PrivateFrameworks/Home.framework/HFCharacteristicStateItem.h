//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NAEquatable-Protocol.h>

@class NSString;
@protocol HFAggregatedCharacteristicValueSource;

@interface HFCharacteristicStateItem : HFItem <NAEquatable>
{
    NSString *_characteristicType;
    id <HFAggregatedCharacteristicValueSource> _valueSource;
    CDUnknownBlockType _resultsProvider;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultsProvider; // @synthesize resultsProvider=_resultsProvider;
@property(readonly, nonatomic) id <HFAggregatedCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithCharacteristicType:(id)arg1 valueSource:(id)arg2 resultsProvider:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

