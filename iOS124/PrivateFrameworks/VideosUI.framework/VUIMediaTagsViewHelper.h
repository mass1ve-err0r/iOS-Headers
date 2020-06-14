//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponentsFormatter, NSMutableDictionary, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsViewHelper : NSObject
{
    NSMutableDictionary *_tagsViewDictionary;
    NSDateComponentsFormatter *_dateComponentFormatter;
    NSNumberFormatter *_tomatoPercentFormatter;
}

- (void).cxx_destruct;
- (id)_commonSenseString:(id)arg1;
- (void)_mediaBagdesWithVUIMediaEntity:(id)arg1;
- (id)_durationDescriptionFromDuration:(id)arg1;
- (id)_releaseDateDescriptionFromDate:(id)arg1;
- (_Bool)_isValidNumber:(id)arg1;
- (void)addSeperatorKey:(id)arg1;
- (id)tagsViewDictionary;
- (id)initWithVUIMediaEntity:(id)arg1;
- (id)initWithVUIMediaItem:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithContentMetadata:(id)arg1 additionalMetadata:(id)arg2;

@end

