//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SQLiteConnection;

@protocol SQLiteConnectionDelegate <NSObject>

@optional
- (_Bool)connectionNeedsResetForCorruption:(SQLiteConnection *)arg1;
- (_Bool)connectionNeedsResetForReopen:(SQLiteConnection *)arg1;
@end

