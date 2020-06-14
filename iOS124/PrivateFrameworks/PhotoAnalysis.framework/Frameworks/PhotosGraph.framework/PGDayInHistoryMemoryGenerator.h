//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localDate;
}

@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (void).cxx_destruct;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;

@end

