//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSArray;
@protocol CNForkJoinResultReportingStrategy;

@interface _CNForkJoinObservable : CNObservable
{
    NSArray *_observables;
    id <CNForkJoinResultReportingStrategy> _resultReportingStrategy;
}

+ (id)progressiveForkJoin:(id)arg1;
+ (id)forkJoin:(id)arg1;
- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1 reportingStrategy:(id)arg2;

@end

