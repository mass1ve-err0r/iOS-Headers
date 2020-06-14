//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class MPMediaQuery, NSDictionary;

@interface MPQueryPlaybackContext : MPPlaybackContext
{
    MPMediaQuery *_query;
    NSDictionary *_startTimeModifications;
    NSDictionary *_endTimeModifications;
}

+ (_Bool)supportsSecureCoding;
+ (Class)queueFeederClass;
@property(copy, nonatomic) NSDictionary *endTimeModifications; // @synthesize endTimeModifications=_endTimeModifications;
@property(copy, nonatomic) NSDictionary *startTimeModifications; // @synthesize startTimeModifications=_startTimeModifications;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1;

@end

