//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDSimpleArtworkElementProduction.h>

@class NSOrderedSet, NSString;

@interface TDSchemaElementProduction : TDSimpleArtworkElementProduction
{
}

- (void)generateNewRendition;
- (id)associatedFileURLWithDocument:(id)arg1;
- (id)relativePath;

// Remaining properties
@property(retain, nonatomic) NSString *folderName; // @dynamic folderName;
@property(retain, nonatomic) NSOrderedSet *slices; // @dynamic slices;

@end

