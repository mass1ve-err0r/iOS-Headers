//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSIndexSet, PTSection;

@protocol PTSectionObserver <NSObject>
- (void)sectionDidReload:(PTSection *)arg1;
- (void)section:(PTSection *)arg1 didInsertRows:(NSIndexSet *)arg2 deleteRows:(NSIndexSet *)arg3;
@end

