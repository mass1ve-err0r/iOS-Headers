//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/JSExport-Protocol.h>

@class NSDictionary;

@protocol OKActionExports <JSExport>
@property(readonly, retain, nonatomic) NSDictionary *context;
@property(readonly, nonatomic) unsigned long long platform;
@property(readonly, nonatomic) unsigned long long touchCount;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) struct CGPoint location;
@property(readonly, nonatomic) double timestamp;
- (void)setContextObject:(id)arg1 forKey:(id)arg2;
@end

