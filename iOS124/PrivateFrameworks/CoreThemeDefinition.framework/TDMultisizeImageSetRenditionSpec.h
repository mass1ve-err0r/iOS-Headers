//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDMultisizeImageSetProduction;

@interface TDMultisizeImageSetRenditionSpec : TDRenditionSpec
{
}

- (_Bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSSet *multisizeImageRenditions; // @dynamic multisizeImageRenditions;
@property(retain, nonatomic) TDMultisizeImageSetProduction *multisizeImageSetProduction; // @dynamic multisizeImageSetProduction;

@end

