//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WLKMovieClipAsset : NSObject
{
    unsigned long long _duration;
    NSString *_flavor;
    NSString *_url;
}

+ (id)movieClipAssetsWithArray:(id)arg1;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *flavor; // @synthesize flavor=_flavor;
@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *durationString;
- (id)init;
- (id)_init;
- (id)initWithDictionary:(id)arg1;

@end

