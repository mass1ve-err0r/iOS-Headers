//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKVisitManager : NSObject
{
}

+ (id)fallbackVisit;
+ (id)sharedVisitManager;
- (id)anyVisit;
- (id)previousVisit;
- (id)currentVisit;
- (void)stopVisitUpdatesForToken:(struct NSString *)arg1;
- (struct NSString *)startVisitUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

