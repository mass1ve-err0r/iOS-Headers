//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNFuture, CNObservable, NSArray;
@protocol CNSchedulerProvider;

@protocol CNUIUserActionRanking <NSObject>
- (CNObservable *)selectRecentActionItems:(CNObservable *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNFuture *)sortActionItems:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
@end

