//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKLocalSearch, NSString;

@interface CalGeocoder : NSObject
{
    NSString *_locationString;
    CDUnknownBlockType _completionBlock;
    MKLocalSearch *_search;
}

+ (void)geocodeLocationString:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) MKLocalSearch *search; // @synthesize search=_search;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
- (void).cxx_destruct;
- (void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)startGeocoding;
- (void)dealloc;
- (id)initWithLocationString:(id)arg1 andCompletionBlock:(CDUnknownBlockType)arg2;

@end

