//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NTKTimelineEntryModel : NSObject
{
    NSDate *_entryDate;
}

@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
- (void).cxx_destruct;
- (id)entryForComplicationFamily:(long long)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end

