//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGThrowbackThursdayMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSDate *_localDate;
}

@property(retain) NSDate *localDate; // @synthesize localDate=_localDate;
- (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_oldWeekInHistoryMomentNodesForLocalDate:(id)arg1;

@end
