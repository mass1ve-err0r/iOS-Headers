//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUValueFilter.h>

@class NSArray;

@interface PUGroupValueFilter : PUValueFilter
{
    NSArray *_filters;
}

@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (double)outputValue;
- (void)setInputValue:(double)arg1;

@end

