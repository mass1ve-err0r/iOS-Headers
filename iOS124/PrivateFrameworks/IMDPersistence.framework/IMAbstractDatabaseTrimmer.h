//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDPersistence/IMAbstractDatabaseArchiver.h>

@interface IMAbstractDatabaseTrimmer : IMAbstractDatabaseArchiver
{
}

- (_Bool)copyDatabase:(CDUnknownBlockType)arg1;
- (_Bool)trimDatabaseWithOperation:(struct IMDSqlOperation *)arg1;
- (void)performMessageSelectionWithOperation:(struct IMDSqlOperation *)arg1;

@end

