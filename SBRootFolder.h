//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolder.h"

@class SBIconListModel;

@interface SBRootFolder : SBFolder
{
    id <SBRootFolderDelegate> _delegate;
}

+ (BOOL)isRootFolderClass;
@property(nonatomic) __weak id <SBRootFolderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isRootFolder;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)children;
@property(retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
@property(readonly, nonatomic) BOOL supportsDock;
- (void)placeIconsOnFirstPage:(id)arg1;
- (id)_listsForCompaction;
- (BOOL)canEditDisplayName;
- (BOOL)canRemoveIcons;

@end

