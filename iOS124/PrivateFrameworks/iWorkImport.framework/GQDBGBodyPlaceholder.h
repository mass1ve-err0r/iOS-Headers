//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDBGPlaceholder.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDWPLayoutFrame, NSString;

__attribute__((visibility("hidden")))
@interface GQDBGBodyPlaceholder : GQDBGPlaceholder <GQDNameMappable>
{
    GQDWPLayoutFrame *mFrame;
}

+ (const struct StateSpec *)stateForReading;
- (_Bool)isBlank;
- (id)layoutFrame;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

