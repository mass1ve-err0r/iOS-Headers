//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (GEOXPCUtil)
+ (id)_geo_errorFromXPCError:(id)arg1;
+ (id)_geo_errorFromXPCData:(id)arg1;
- (id)_geo_newXPCData;
@property(readonly, nonatomic) _Bool _geo_isXPCInterruptedError;
@end

