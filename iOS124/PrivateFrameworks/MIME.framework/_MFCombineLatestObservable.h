//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFObservable.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MFCombineLatestObservable : MFObservable
{
    NSArray *_observables;
}

@property(copy, nonatomic) NSArray *observables; // @synthesize observables=_observables;
- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;

@end

