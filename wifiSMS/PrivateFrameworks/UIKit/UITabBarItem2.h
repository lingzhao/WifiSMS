/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIBarItem.h>
#import <UIKit/UITabBarItem.h>
#import "UIKit-Structs.h"

@class NSSet, UIView, NSString, UIImage;

@interface UITabBarItem ()
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)setEnabled:(BOOL)enabled;
-(BOOL)isEnabled;
-(void)setTitle:(id)title;
-(id)title;
-(void)setImage:(id)image;
-(id)image;
-(void)setImageInsets:(UIEdgeInsets)insets;
-(UIEdgeInsets)imageInsets;
@end

@interface UITabBarItem (Static)
-(id)nextResponder;
-(id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge;
-(void)_updateView;
@end

@interface UITabBarItem (UITabBarItem_Private)
@property(assign, nonatomic) id target;
@property(assign, nonatomic) SEL action;
@property(retain, nonatomic) UIImage* unselectedImage;
@property(retain, nonatomic) UIImage* selectedImage;
@property(assign, nonatomic) BOOL animatedBadge;
@property(assign, nonatomic) BOOL viewIsCustom;
@property(retain, nonatomic) UIView* view;
-(BOOL)isSystemItem;
-(int)systemItem;
-(id)_internalTitle;
-(id)_internalTemplateImage;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)_setInternalTitle:(id)title;
-(void)_setInternalTemplateImage:(id)image;
#endif
@end
