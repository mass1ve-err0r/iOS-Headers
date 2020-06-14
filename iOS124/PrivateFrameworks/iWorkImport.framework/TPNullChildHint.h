//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDArchivedHint-Protocol.h>

@class NSString;
@protocol TSDHint;

__attribute__((visibility("hidden")))
@interface TPNullChildHint : TSPObject <TSDArchivedHint>
{
}

@property(retain, nonatomic) id <TSDHint> hint;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 hint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

