//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPNondurableMediaItem.h>

@class NSString, NSUUID;

@interface MPPlaybackPlaceholderMediaItem : MPNondurableMediaItem
{
    NSUUID *_uniqueIdentifier;
    NSString *_placeholderTitle;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *placeholderTitle; // @synthesize placeholderTitle=_placeholderTitle;
- (void).cxx_destruct;
- (id)valuesForProperties:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

