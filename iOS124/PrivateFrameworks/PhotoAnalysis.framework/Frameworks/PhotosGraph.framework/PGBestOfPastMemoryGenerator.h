//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

@property(nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;

@end

