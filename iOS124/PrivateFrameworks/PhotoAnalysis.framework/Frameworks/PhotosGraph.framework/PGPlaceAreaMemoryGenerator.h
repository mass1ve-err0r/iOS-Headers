//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet, NSString;

@interface PGPlaceAreaMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSSet *_supersetAddressNodes;
    NSString *_area;
    long long _year;
}

@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) NSString *area; // @synthesize area=_area;
- (void).cxx_destruct;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_potentialMemoriesWithAreaNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end

