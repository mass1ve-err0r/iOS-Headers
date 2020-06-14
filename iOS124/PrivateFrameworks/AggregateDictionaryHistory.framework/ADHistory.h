//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADHistory : NSObject
{
    struct Database *_database;
    NSString *_path;
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(CDUnknownBlockType)arg4;
- (_Bool)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;

@end

