//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardParsedResultBuilder-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder>
{
    NSMutableDictionary *_dictionaryRep;
}

+ (id)factory;
- (void).cxx_destruct;
- (id)validCountryCodes;
- (void)setUnknownProperties:(id)arg1;
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (_Bool)setImageData:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)canSetValueForProperty:(id)arg1;
- (id)build;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

