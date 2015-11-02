//
//  BoPhotoGroupView.h
//  PhotoPicker
//
//  Created by AlienJunX on 15/11/2.
//  Copyright © 2015年 com.alienjun.demo. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ALAssetsGroup;
@class ALAssetsFilter;

@protocol BoPhotoGroupViewProtocol <NSObject>

-(void)didSelectGroup:(ALAssetsGroup *)assetsGroup;

@end


@interface BoPhotoGroupView : UITableView

@property (weak, nonatomic) id<BoPhotoGroupViewProtocol> my_delegate;

@property (nonatomic, strong) NSPredicate *selectionFilter;
@property (nonatomic, strong) ALAssetsFilter *assetsFilter;
@property (nonatomic, assign) BOOL showEmptyGroups;
@property (nonatomic) NSInteger selectIndex;

-(void)setupGroup;

@end
