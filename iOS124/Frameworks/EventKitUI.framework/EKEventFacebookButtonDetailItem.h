//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventFacebookButtonDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
}

- (void).cxx_destruct;
- (void)layoutCellsForWidth:(double)arg1 position:(int)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

