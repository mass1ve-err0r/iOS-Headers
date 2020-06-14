//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKInstalledSystemApplicationsChangeObserver-Protocol.h>

@class NSArray, NSIndexSet, NSString;

@interface _SlotDescriptor : NSObject <NTKInstalledSystemApplicationsChangeObserver>
{
    long long _family;
    NSArray *_typesRankedList;
    NSIndexSet *_allowedTypes;
    NSIndexSet *_possibleTypes;
}

+ (id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3;
@property(readonly, nonatomic) NSIndexSet *possibleTypes; // @synthesize possibleTypes=_possibleTypes;
@property(readonly, nonatomic) NSIndexSet *allowedTypes; // @synthesize allowedTypes=_allowedTypes;
@property(readonly, nonatomic) NSArray *typesRankedList; // @synthesize typesRankedList=_typesRankedList;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
- (void).cxx_destruct;
- (void)installedSystemApplicationsDidChange;
- (_Bool)supportsType:(unsigned long long)arg1;
- (_Bool)allowsType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

